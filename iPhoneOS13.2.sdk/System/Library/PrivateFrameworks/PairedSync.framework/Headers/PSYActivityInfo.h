//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSNumber, NSString;

@interface PSYActivityInfo : NSObject <NSSecureCoding>
{
    NSString *_label;
    NSString *_machServiceName;
    NSString *_priority;
    NSNumber *_timeoutSeconds;
    NSArray *_sessionTypes;
    NSString *_backboardPrelaunchBundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)activityWithPlist:(id)arg1;
@property(copy, nonatomic) NSString *backboardPrelaunchBundleIdentifier; // @synthesize backboardPrelaunchBundleIdentifier=_backboardPrelaunchBundleIdentifier;
@property(copy, nonatomic) NSArray *sessionTypes; // @synthesize sessionTypes=_sessionTypes;
@property(copy, nonatomic) NSNumber *timeoutSeconds; // @synthesize timeoutSeconds=_timeoutSeconds;
@property(copy, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

