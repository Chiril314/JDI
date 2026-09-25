<?php

if($authService->isLoggedIn()){
    header("Location: index.php?page=dashboard");
    exit;
}

$error = null;

if($_SERVER["REQUEST_METHOD"] === "POST"){
    $email = trim($_POST["email"] ?? "");
    $username = trim($_POST["username"] ?? "");
    $password = trim($_POST["password"] ?? "");

    if(empty($email) || empty($username) || empty($password)){
        $error = "All fields are required.";
    } elseif(!filter_var($email, FILTER_VALIDATE_EMAIL)){
        $error = "Invalid email address.";
    } elseif(strlen($password) < 8){
        $error = "Password must be at least 8 characters";
    } else{
        $success = $authService->register(
            $email,
            $username,
            $password
        );

        if($success){
            header("Location: index.php?page=dashboard");
            exit;
        }

        $error = "Email or username already exists";
    }
}

?>

<h1>Register</h1>

<?php if($error): ?>
    <p><?= $error ?></p>
<?php endif; ?>

<form method="post">
    <div>
        <label for="email">Email</label>
        <input type="email" name="email" required>
    </div>

    <div>
        <label for="username">Username</label>
        <input type="text" id="username" name="username" required>
    </div>

    <div>
        <label for="password">Password</label>
        <input type="password" id="password" name="password" required>
    </div>

    <button type="submit">Register</button>
</form>