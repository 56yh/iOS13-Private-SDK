//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString;

@protocol ECMessageHeaders <NSCopying, NSObject>
- (NSArray *)listUnsubscribeCommands;
- (NSString *)firstSenderAddress;
- (NSString *)firstAddressForKey:(NSString *)arg1;
- (id)firstHeaderForKey:(NSString *)arg1;
- (NSArray *)headersForKey:(NSString *)arg1;
- (NSArray *)allHeaderKeys;
@end

