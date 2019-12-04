//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface TSWPTranscriber : NSObject
{
    NSString *_displayName;
    NSString *_identifier;
    NSString *_transformIdentifier;
    NSLocale *_romanizationLocale;
}

+ (id)transcriberWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4;
@property(readonly) NSLocale *romanizationLocale; // @synthesize romanizationLocale=_romanizationLocale;
- (void)transcribeString:(id)arg1 withRange:(struct _NSRange)arg2 locale:(id)arg3 inputLanguage:(id)arg4 block:(id /* block */)arg5;
- (id)transcribeText:(id)arg1 withLocale:(id)arg2;
- (id)transcribeText:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4;

@end

