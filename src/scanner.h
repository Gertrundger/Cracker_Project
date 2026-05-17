#ifndef SCANNER_H
#define SCANNER_H

#include <string>

enum ScanMode {
    MODE_KANGAROO,
    MODE_BSGS,
    MODE_RANDOM
};

class KeyScanner {
public:
    KeyScanner();
    ~KeyScanner();

    bool setMode(ScanMode mode);
    bool setRange(const std::string& start, const std::string& end);
    bool setPublicKey(const std::string& pubkey);
    bool startScan();
    void stopScan();
    std::string getFoundKey() const;

private:
    ScanMode currentMode;
    bool scanning;
};

#endif