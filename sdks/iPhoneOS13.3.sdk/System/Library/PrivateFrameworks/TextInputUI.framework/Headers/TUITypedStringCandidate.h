//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TUITypedStringCandidate : TIKeyboardCandidateSingle
{
    NSString *_displayLabel;
}

+ (id)typedStringCandidateWithLocale:(id)arg1 typedString:(id)arg2;
@property(retain, nonatomic) NSString *displayLabel; // @synthesize displayLabel=_displayLabel;
// - (void).cxx_destruct;
- (id)label;

@end

