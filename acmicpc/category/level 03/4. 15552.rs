use std::io;
use std::io::Write;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let count = input.trim().parse::<i32>().unwrap();
    let mut write_buffer = io::BufWriter::new(io::stdout());
    
    for i in 0..count {
        input.clear();
        io::stdin().read_line(&mut input).unwrap();

        let numbers :Vec<i32> = input.split_whitespace().map(|s| s.to_string().parse::<i32>().unwrap()).collect();
        writeln!(write_buffer, "{}", numbers[0] + numbers[1]).unwrap();
    }
}