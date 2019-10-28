use std::io;

fn main() {
    let mut input = String::new();
    let mut total = 0;

    io::stdin().read_line(&mut input).unwrap();
    input.clear();
    io::stdin().read_line(&mut input).unwrap();

    for i in input.trim().chars() {
        total += i.to_digit(10).unwrap();
    }

    println!("{}", total);
}