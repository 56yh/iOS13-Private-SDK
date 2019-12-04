//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSString, UNNotificationIcon, UNNotificationSourceSettings;

@interface UNNotificationSource : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isHiddenFromSettings;
    NSString *_sourceIdentifier;
    NSString *_displayName;
    UNNotificationIcon *_icon;
    UNNotificationSourceSettings *_sourceSettings;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) UNNotificationSourceSettings *sourceSettings; // @synthesize sourceSettings=_sourceSettings;
@property(readonly, copy, nonatomic) UNNotificationIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) _Bool isHiddenFromSettings; // @synthesize isHiddenFromSettings=_isHiddenFromSettings;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 isHidden:(_Bool)arg2 displayName:(id)arg3 icon:(id)arg4 settings:(id)arg5;

@end
