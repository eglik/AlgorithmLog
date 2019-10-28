use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();
    let range = input.trim().parse::<i32>().unwrap();
    for i in 0..range {
        input.clear();
        io::stdin().read_line(&mut input).unwrap();
        let mut split = input.split_whitespace();
        let mut count = split.next().unwrap().parse::<i32>().unwrap();
        let mut s = split.next().unwrap();

        for c in s.chars() {
            for _ in 0..count {
                print!("{}", c);
            }
        }
        println!("");
    }
}