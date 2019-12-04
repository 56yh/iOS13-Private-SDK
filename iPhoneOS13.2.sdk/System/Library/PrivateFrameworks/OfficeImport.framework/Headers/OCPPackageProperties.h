//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCPPackageProperties : NSObject
{
    NSString *mCreator;
    NSString *mDescription;
    NSString *mKeywords;
    NSString *mTitle;
    NSString *mAppVersion;
    NSString *mSubject;
    NSString *mCompany;
}

@property(retain) NSString *company; // @synthesize company=mCompany;
@property(retain) NSString *subject; // @synthesize subject=mSubject;
- (id)appVersion;
- (id)title;
- (id)keywords;
- (id)description;
- (id)creator;
- (id)initWithCoreXml:(struct _xmlDoc *)arg1 appXml:(struct _xmlDoc *)arg2;
- (void)readFromCoreXml:(struct _xmlDoc *)arg1 appXml:(struct _xmlDoc *)arg2;
- (void)readFromAppXml:(struct _xmlDoc *)arg1;
- (void)readFromCoreXml:(struct _xmlDoc *)arg1;

@end

