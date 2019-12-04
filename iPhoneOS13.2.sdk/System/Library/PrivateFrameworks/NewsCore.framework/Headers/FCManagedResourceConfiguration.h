//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString;

@interface FCManagedResourceConfiguration : NSObject <NSCopying>
{
    NSString *_resourceID;
    long long _refreshRate;
}

@property(readonly, nonatomic) long long refreshRate; // @synthesize refreshRate=_refreshRate;
@property(readonly, copy, nonatomic) NSString *resourceID; // @synthesize resourceID=_resourceID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResourceID:(id)arg1 refreshRate:(long long)arg2;
- (id)init;

@end

