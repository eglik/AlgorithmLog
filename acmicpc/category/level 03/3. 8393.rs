use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let count = input.trim().parse::<i32>().unwrap();
    
    let mut total = 0;

    for i in 1..count+1 {
        total += i;
    }

    println!("{}", total);
}