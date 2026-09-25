<?php

function requireLogin(): void {
    global $authService;
    if(!$authService->isLoggedIn()){
        header("Location: index.php?page=login");
        exit;
    }
}