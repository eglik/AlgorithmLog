use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let number = input.trim().parse::<i32>().unwrap();
    let mut guess = number;
    let mut count = 0;

    loop {
        let ten = (guess % 10) * 10;
        guess = guess / 10 + guess % 10;
        guess = ten + guess % 10;
        count += 1;

        if guess == number {
            break;
        }
    }

    println!("{}", count);
}