#pragma once

#include <iostream>

struct StoreListener;
struct LinuxStore {
    virtual ~LinuxStore() {
        std::cout << "destroying store\n";
    }
    virtual bool allowsQueryPurchasesOnStartup() {
        std::cout << "allows query purchases on startup: false\n";
        return false;
    }
    virtual std::string getStoreId() {
        std::cout << "get store id: LinuxStore\n";
        return "LinuxStore";
    }
    virtual void queryProducts(std::vector<std::string> const& arr) {
        std::cout << "query products\n";
    }
    virtual void purchase(std::string const& name) {
        std::cout << "purchase: " << name << "\n";
    }
    virtual void queryPurchases() {
        std::cout << "query purchases\n";
    }
    virtual bool isTrial() {
        //std::cout << "is trial: false\n";
        return false;
    }
    virtual void purchaseGame() {
        std::cout << "purchase game\n";
    }
    virtual bool isGamePurchased() {
        std::cout << "is game purchased: true\n";
        return true;
    }
    virtual void registerLicenseChangeCallback() {
        std::cout << "register license change callback\n";
    }
    virtual void handleLicenseChange() {
        std::cout << "handle license changed\n";
    }
};