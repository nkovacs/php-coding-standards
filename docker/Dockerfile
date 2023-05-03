FROM php:8.2-cli-bullseye
WORKDIR /usr/src/app

RUN apt-get update && \
    apt-get install -y  --no-install-recommends \
    git \
    unzip

RUN mv "$PHP_INI_DIR/php.ini-development" "$PHP_INI_DIR/php.ini"

RUN pecl install xdebug-3.2.1 && docker-php-ext-enable xdebug
ADD xdebug_coverage.ini /usr/local/etc/php/conf.d/xdebug_coverage.ini

RUN php -r "readfile('https://getcomposer.org/installer');" > composer-setup.php \
    && php -r "if (hash_file('SHA384', 'composer-setup.php') === trim(file_get_contents('https://composer.github.io/installer.sig'))) { echo 'Installer verified'; } else { echo 'Installer corrupt'; unlink('composer-setup.php'); } echo PHP_EOL;" \
    && php composer-setup.php --install-dir=/usr/local/bin --filename=composer \
    && php -r "unlink('composer-setup.php');"

ENV COMPOSER_IGNORE_PLATFORM_REQS=php

ENTRYPOINT ["sleep", "infinity"]
STOPSIGNAL SIGKILL
