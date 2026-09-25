<?php

session_start();

require_once "../includes/database.php";
require_once "../includes/services/AuthService.php";
require_once "../includes/auth.php";

$authService = new AuthService($pdo);

$page = $_GET["page"] ?? "dashboard";

$allowedPages = [
    "register",
    "login",
    "logout",
    "dashboard"
];

if(!in_array($page, $allowedPages)){
    http_response_code(404);
    exit;
}

require "../pages/{$page}.php";