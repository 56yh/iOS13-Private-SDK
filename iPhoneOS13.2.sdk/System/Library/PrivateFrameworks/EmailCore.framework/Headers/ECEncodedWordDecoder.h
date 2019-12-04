//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSNumber, NSString;

@interface ECEncodedWordDecoder : NSObject
{
    NSNumber *_stringEncoding;
    NSString *_language;
    NSData *_headerData;
    long long _encodedWordEncoding;
    struct _NSRange _encodedTextRange;
}

@property(nonatomic) struct _NSRange encodedTextRange; // @synthesize encodedTextRange=_encodedTextRange;
@property(nonatomic) long long encodedWordEncoding; // @synthesize encodedWordEncoding=_encodedWordEncoding;
@property(readonly, copy, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSNumber *stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void)_enumerateQByteRangesUsingBlock:(id /* block */)arg1;
- (_Bool)_decodeQEncodedTextToData:(id)arg1;
- (_Bool)_decodeBEncodedTextToData:(id)arg1;
- (_Bool)decodeEncodedTextToData:(id)arg1;
- (id)_encodedWordLanguageDelimiter;
- (id)_encodedWordDelimiter;
- (id)_encodedWordEndSequence;
- (id)_lineSeparator;
- (id)_encodedWordStartSequence;
- (struct _NSRange)identifyRangeOfEncodedWordAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithHeaderData:(id)arg1;

@end

