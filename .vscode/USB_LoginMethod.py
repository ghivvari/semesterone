username = "goy"
password = "123"
correct_attempts = 0


def inputtuser():
    inputusername = input("Type username: ")
    inputpassword = input("Type password: ")
    return inputusername, inputpassword


def security(inputusername, inputpassword):
    global correct_attempts

    if inputusername == username and inputpassword == password:
        correct_attempts += 1
        if correct_attempts == 2:
            print("Benar")
            return True
        print("Salah")
    else:
        print("Salah")

    return False


logged_in = False

while not logged_in:
    inputusername, inputpassword = inputtuser()
    logged_in = security(inputusername, inputpassword)


