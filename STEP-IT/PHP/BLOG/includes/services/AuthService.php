 
    {
            $username,
            $passwordHash
        ]);   
    }

    public function login(string $username, string $password): bool {
        $stmt = $this->pdo->prepare("
            SELECT id, password
            FROM users
            WHERE email = ?
        ");

        $stmt->execute([
            $email
        ]);

        $user = $stmt->fetch();
        if(!$user)
            return false;

        if(!password_verify($password, $user["password"]))
            return false;

        $_SESSION["user_id"] = $user["id"];

        return true;
    }

    public function logout(): void {
        unset($_SESSION["user_id"]);
    }

    public function isLoggedIn(): bool {
        return isset($_SESSION["user_id"]);
    }

    public function userId(): ?int {
        return $_SESSION["user_id"] ?? null;
    }
}