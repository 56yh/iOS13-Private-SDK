//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TIWordTokenizer : NSObject
{
    NSString *m_string;
    struct {
        unsigned short buffer[64];
        struct __CFString *theString;
        unsigned short *directUniCharBuffer;
        char *directCStringBuffer;
        struct {
            long long location;
            long long length;
        } rangeToBuffer;
        long long bufferedRangeStart;
        long long bufferedRangeEnd;
    } m_inlineBuffer;
    struct _NSRange m_tokenRange;
    struct _NSRange m_searchRange;
    unsigned long long m_bufferOffset;
}

- (id)allTokensForString:(id)arg1;
- (struct _NSRange)rangeOfCurrentToken;
- (struct _NSRange)advanceToNextToken;
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange)arg2;
- (id)init;

@end

