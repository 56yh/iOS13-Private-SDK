//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSDate, NSString;

@interface _PSMapsPredictionContext : NSObject <NSSecureCoding>
{
    NSDate *_suggestionDate;
    NSString *_bundleID;
    NSString *_navigationStartLocationId;
    NSString *_navigationEndLocationId;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *navigationEndLocationId; // @synthesize navigationEndLocationId=_navigationEndLocationId;
@property(copy, nonatomic) NSString *navigationStartLocationId; // @synthesize navigationStartLocationId=_navigationStartLocationId;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSDate *suggestionDate; // @synthesize suggestionDate=_suggestionDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

