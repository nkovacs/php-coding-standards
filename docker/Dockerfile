ARG PHP_VER
ARG DEBIAN_RELEASE

FROM php:${PHP_VER}-cli-${DEBIAN_RELEASE}

ARG DEBIAN_RELEASE
ARG XDEBUG_VER

WORKDIR /usr/src/app

RUN if [ "$DEBIAN_RELEASE" = "stretch" ] ; then echo "deb http://archive.debian.org/debian stretch main contrib non-free" > /etc/apt/sources.list ; fi

RUN apt-get update && \
    apt-get install -y  --no-install-recommends \
    git \
    unzip

RUN mv "$PHP_INI_DIR/php.ini-development" "$PHP_INI_DIR/php.ini"

RUN pecl install xdebug-${XDEBUG_VER} && docker-php-ext-enable xdebug
ADD xdebug_coverage.ini /usr/local/etc/php/conf.d/xdebug_coverage.ini

RUN php -r "readfile('https://getcomposer.org/installer');" > composer-setup.php \
    && php -r "if (hash_file('SHA384', 'composer-setup.php') === trim(file_get_contents('https://composer.github.io/installer.sig'))) { echo 'Installer verified'; } else { echo 'Installer corrupt'; unlink('composer-setup.php'); } echo PHP_EOL;" \
    && php composer-setup.php --install-dir=/usr/local/bin --filename=composer \
    && php -r "unlink('composer-setup.php');"

ENTRYPOINT ["sleep", "infinity"]
STOPSIGNAL SIGKILL
