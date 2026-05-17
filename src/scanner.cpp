#include "scanner.h"
#include <iostream>

KeyScanner::KeyScanner() : currentMode(MODE_RANDOM), scanning(false) {
    std::cout << "KeyScanner initialized" << std::endl;
}

KeyScanner::~KeyScanner() {
    stopScan();
}

bool KeyScanner::setMode(ScanMode mode) {
    currentMode = mode;
    return true;
}

bool KeyScanner::setRange(const std::string& start, const std::string& end) {
    // Placeholder
    return true;
}

bool KeyScanner::setPublicKey(const std::string& pubkey) {
    // Placeholder
    return true;
}

bool KeyScanner::startScan() {
    scanning = true;
    std::cout << "Scan started (simulated). Use pre‑compiled binary for actual scanning." << std::endl;
    return true;
}

void KeyScanner::stopScan() {
    scanning = false;
}

std::string KeyScanner::getFoundKey() const {
    return "";
}