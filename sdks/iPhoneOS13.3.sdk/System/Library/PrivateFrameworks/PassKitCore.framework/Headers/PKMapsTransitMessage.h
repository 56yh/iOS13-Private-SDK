//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSString, NSURL;

@interface PKMapsTransitMessage : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_localizedMessage;
    NSString *_localizedActionTitle;
    NSURL *_actionURL;
    long long _iconType;
    NSDictionary *_userInfo;
    NSString *_identifier;
    long long _maxNotificationCount;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long maxNotificationCount; // @synthesize maxNotificationCount=_maxNotificationCount;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(readonly, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, nonatomic) NSString *localizedActionTitle; // @synthesize localizedActionTitle=_localizedActionTitle;
@property(readonly, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithIdentifier:(id)arg1 message:(id)arg2 actionTitle:(id)arg3 actionURL:(id)arg4 iconType:(long long)arg5 userInfo:(id)arg6;

@end
