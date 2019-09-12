use std::io;

fn main() {
    loop {
        let mut input = String::new();
        io::stdin().read_line(&mut input).unwrap();

        if input.trim().is_empty() {
            break;
        }

        let numbers: Vec<i32> = input.split_whitespace().map(|s| s.to_string().parse::<i32>().unwrap()).collect();
        
        println!("{}", numbers[0] + numbers[1]);
    }
}