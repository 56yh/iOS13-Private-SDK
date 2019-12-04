//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQZEntryInputStream-Protocol.h>

@class NSString;
@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntryInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s mStream;
    long long mOffset;
    long long mEnd;
    unsigned long long mCalculatedCrc;
    unsigned long long mCheckCrc;
    id <GQZArchiveInputStream> mInput;
    char *mOutBuffer;
    unsigned long long mOutBufferSize;
}

- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)readToOwnBuffer:(const char **)arg1 size:(unsigned long long *)arg2;
- (void)dealloc;
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 input:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

