FROM gentoo/stage3:latest

RUN echo "Updating Gentoo index registry..."
RUN emerge-webrsync


RUN echo "Setting up package manager"
# Allow emerge newer versions of cmake. We need it because vcpkg wants it.
RUN echo "dev-build/cmake ~amd64" >> /etc/portage/package.accept_keywords/unmask
# # Get some packages as binaries and don't compile them. Actually, it allows to not compile only zip :(
# RUN rm -rf /etc/portage/binrepos.conf/*
# RUN echo -e "[binhost]\npriority = 9999\nsync-uri = https://gentoo.osuosl.org/experimental/amd64/binpkg/default/linux/17.1/x86-64/" >> /etc/portage/binrepos.conf/osuosl.conf
# RUN cat /etc/portage/binrepos.conf/*
# Arguments that going to be added automatically to `emerge` command. `man emerge` in help. Or read https://wiki.gentoo.org/wiki/Binary_package_guide/en#Installing_binary_packages .
# RUN echo 'EMERGE_DEFAULT_OPTS="${EMERGE_DEFAULT_OPTS} --binpkg-respect-use=y --getbinpkg=y --verbose --verbose-conflicts "' >> /etc/portage/make.conf

RUN echo "Installing dependencies..."

RUN emerge --quiet --verbose --tree --verbose-conflicts --jobs=2 dev-vcs/git dev-build/cmake zip

# RUN echo "Installing vcpkg..."
# RUN git clone https://github.com/Microsoft/vcpkg.git && \
# 		./vcpkg/bootstrap-vcpkg.sh -disableMetrics 
#
# COPY ./vcpkg.json ./vcpkg.json
#
# RUN echo "Installing dependencies using vcpkg"
# RUN ./vcpkg/vcpkg install

WORKDIR /backend

RUN echo "Copy sources of the project"
COPY . .
RUN ls -lah

RUN echo "Configuring project..."
RUN cmake -S ./all -B ./build --log-level DEBUG -DFETCHCONTENT_QUIET=OFF


RUN echo "Building project..."
RUN cmake --build ./build --parallel $(nproc) --verbose

RUN echo "installing in a dir"
RUN cmake --install ./build --prefix ./install_dir

RUN echo "showing install dir"
RUN ls -lah -R ./install_dir

RUN echo "really installing inside docker"
RUN cmake --install ./build

RUN echo "what's with linking?"
RUN ls -lahR /usr/local/lib64  
RUN lddtree /usr/local/lib64/liblibWRPkeycmakednupdated.so
RUN lddtree /usr/local/bin/libWRPkeycmakednupdated





