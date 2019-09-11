use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let count = input.trim().parse::<i32>().unwrap();
    
    for i in 0..count {
        for k in count-i..count+1 {
            print!("*");
        }
        println!();
    }
}