//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailSupport/EFLoggable-Protocol.h>

@class NSString;

@interface MSSiriIntelligenceSettings : NSObject <EFLoggable>
{
}

+ (void)_initializeSettings;
+ (void)setCanShowSiriSuggestions:(_Bool)arg1;
+ (_Bool)canShowSiriSuggestions;
+ (id)log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

