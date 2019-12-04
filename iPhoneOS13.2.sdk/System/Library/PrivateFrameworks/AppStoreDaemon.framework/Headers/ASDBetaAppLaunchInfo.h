//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class ASDBetaAppDisplayNames, ASDBetaAppVersion, NSDate, NSDictionary, NSString;

@interface ASDBetaAppLaunchInfo : NSObject <NSSecureCoding>
{
    _Bool _feedbackEnabled;
    _Bool _launchScreenEnabled;
    _Bool _sharedFeedback;
    NSString *_artistName;
    ASDBetaAppDisplayNames *_displayNames;
    NSDate *_expirationDate;
    NSString *_iconURLTemplate;
    NSDate *_lastWelcomeScreenViewDate;
    NSDictionary *_localizedTestNotes;
    NSString *_testerEmail;
    ASDBetaAppVersion *_version;
}

+ (_Bool)supportsSecureCoding;
@property(copy) ASDBetaAppVersion *version; // @synthesize version=_version;
@property(copy) NSString *testerEmail; // @synthesize testerEmail=_testerEmail;
@property(getter=hasSharedFeedback) _Bool sharedFeedback; // @synthesize sharedFeedback=_sharedFeedback;
@property(copy) NSDictionary *localizedTestNotes; // @synthesize localizedTestNotes=_localizedTestNotes;
@property(getter=isLaunchScreenEnabled) _Bool launchScreenEnabled; // @synthesize launchScreenEnabled=_launchScreenEnabled;
@property(copy) NSDate *lastWelcomeScreenViewDate; // @synthesize lastWelcomeScreenViewDate=_lastWelcomeScreenViewDate;
@property(copy) NSString *iconURLTemplate; // @synthesize iconURLTemplate=_iconURLTemplate;
@property(getter=isFeedbackEnabled) _Bool feedbackEnabled; // @synthesize feedbackEnabled=_feedbackEnabled;
@property(copy) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) ASDBetaAppDisplayNames *displayNames; // @synthesize displayNames=_displayNames;
@property(copy) NSString *artistName; // @synthesize artistName=_artistName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end

