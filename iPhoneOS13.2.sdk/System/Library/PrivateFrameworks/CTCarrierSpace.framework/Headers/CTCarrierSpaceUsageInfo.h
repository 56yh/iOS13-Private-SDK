//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSString;

@interface CTCarrierSpaceUsageInfo : NSObject <NSSecureCoding>
{
    NSArray *_accountMetrics;
    NSString *_moreDetailsURL;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *moreDetailsURL; // @synthesize moreDetailsURL=_moreDetailsURL;
@property(retain, nonatomic) NSArray *accountMetrics; // @synthesize accountMetrics=_accountMetrics;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

