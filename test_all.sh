#!/bin/sh

docker compose exec php8.2 composer install

for ver in 5.6 7.0 7.1 7.2 7.3 7.4 8.0 8.1 8.2; do
    echo "Testing on php $ver"
    docker compose exec php${ver} vendor/bin/phpunit
done
