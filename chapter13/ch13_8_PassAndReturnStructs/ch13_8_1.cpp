#include <iostream>

struct WebsiteData{
    int adsWatched{};
    double adsClickedPercent{};
    double avgEarningsPerClickedAd{};
};

double calculateRevenue(const WebsiteData& siteMetrics)
{
    return siteMetrics.adsWatched * (siteMetrics.adsClickedPercent / 100) * siteMetrics.avgEarningsPerClickedAd;
}

WebsiteData getWebsiteData()
{
    WebsiteData wd{};
    std::cout << "Please enter the number of ads watched today: ";
    std::cin >>  wd.adsWatched;
    std::cout << "Please enter the percentage of ads clicked: ";
    std::cin >>  wd.adsClickedPercent;
    std::cout << "Please enter the average earnings per clicked ad: ";
    std::cin >>  wd.avgEarningsPerClickedAd;
    return wd;    
}

void printWebsiteRevenue(const WebsiteData& siteMetrics)
{
    std::cout << "The total revenue for today is : " << calculateRevenue(siteMetrics);
}

void printWebsiteMetrics(const WebsiteData& siteMetrics)
{
    std::cout << "Ads watched: " << siteMetrics.adsWatched << '\n';
    std::cout << "Percentage of ads clicked: " << siteMetrics.adsClickedPercent << '\n';
    std::cout << "Average earnings per ad: " << siteMetrics.avgEarningsPerClickedAd << '\n';
    printWebsiteRevenue(siteMetrics);
}

int main()
{
    WebsiteData wd {getWebsiteData()};
    printWebsiteMetrics(wd);
    return 0;
}
