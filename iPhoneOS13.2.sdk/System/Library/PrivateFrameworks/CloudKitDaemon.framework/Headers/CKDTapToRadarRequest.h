//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDTapToRadarRequest : NSObject
{
    NSString *_message;
    NSString *_uuid;
    NSString *_componentName;
    NSString *_componentVersion;
    NSString *_componentID;
    NSString *_relatedRadar;
}

@property(retain, nonatomic) NSString *relatedRadar; // @synthesize relatedRadar=_relatedRadar;
@property(retain, nonatomic) NSString *componentID; // @synthesize componentID=_componentID;
@property(retain, nonatomic) NSString *componentVersion; // @synthesize componentVersion=_componentVersion;
@property(retain, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;

@end

