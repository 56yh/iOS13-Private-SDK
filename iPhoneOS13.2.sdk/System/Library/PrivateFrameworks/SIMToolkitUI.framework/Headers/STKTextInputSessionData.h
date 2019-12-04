//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SIMToolkitUI/STKTextSessionData.h>

@class NSString;

@interface STKTextInputSessionData : STKTextSessionData
{
    NSString *_defaultText;
    _Bool _isSecure;
    _Bool _isDigitsOnly;
    unsigned long long _minimumInputLength;
    unsigned long long _maximumInputLength;
}

@property(readonly, nonatomic) unsigned long long maximumInputLength; // @synthesize maximumInputLength=_maximumInputLength;
@property(readonly, nonatomic) unsigned long long minimumInputLength; // @synthesize minimumInputLength=_minimumInputLength;
@property(readonly, nonatomic) _Bool isDigitsOnly; // @synthesize isDigitsOnly=_isDigitsOnly;
@property(readonly, nonatomic) _Bool isSecure; // @synthesize isSecure=_isSecure;
@property(readonly, copy, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1;

@end

