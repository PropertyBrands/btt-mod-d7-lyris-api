<?php
function lyris_api_test() {
  $client = lyris_api_instantiate();
  $list = $client->listQuery();
  kpr($list);
}