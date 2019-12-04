//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RKNLEventTokenizer : NSObject
{
    NSString *_languageID;
    struct __CFStringTokenizer *_tokenizer;
}

+ (_Bool)isSpecialToken:(id)arg1;
+ (void)initialize;
@property struct __CFStringTokenizer *tokenizer; // @synthesize tokenizer=_tokenizer;
@property(readonly) NSString *languageID; // @synthesize languageID=_languageID;
- (id)buildTokenSquence:(id)arg1 withOffset:(unsigned long long)arg2;
- (id)getTokens:(id)arg1;
- (id)processForHyphenation:(id)arg1;
- (id)processForEmoticons:(id)arg1;
- (id)transform:(id)arg1;
- (id)processForEmoticonsAndEmojis:(id)arg1;
- (_Bool)hasEmoticon:(id)arg1;
- (id)tokenizeWithDataDetectors:(id)arg1;
- (id)initWithLanguageID:(id)arg1;
- (void)dealloc;

@end

