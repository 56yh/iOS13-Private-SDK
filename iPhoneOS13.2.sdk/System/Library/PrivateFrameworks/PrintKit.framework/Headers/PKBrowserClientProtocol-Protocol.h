//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSNumber, NSUUID, PKPrinter;

@protocol PKBrowserClientProtocol 
- (void)btlePrinterFound:(PKPrinter *)arg1;
- (void)btleRssiUpdated:(NSUUID *)arg1 rssi:(NSNumber *)arg2;
- (void)printerRemoved:(PKPrinter *)arg1 more:(_Bool)arg2;
- (void)printerAdded:(PKPrinter *)arg1 more:(_Bool)arg2;
@end

