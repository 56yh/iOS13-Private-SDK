//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUStreamReadChannel-Protocol.h>

@protocol TSUStreamReadChannel;

__attribute__((visibility("hidden")))
@interface OITSUZipInflateReadChannel : NSObject <TSUStreamReadChannel>
{
    id <TSUStreamReadChannel> _readChannel;
    NSUInteger _remainingUncompressedSize;
    unsigned int _CRC;
    BOOL _validateCRC;
    struct z_stream_s _stream;
    NSUInteger _outBufferSize;
    char _outBuffer;
}

// - (void).cxx_destruct;
- (void)close;
- (void)handleFailureWithHandler:(id /* CDUnknownBlockType */)arg1 error:(id)arg2;
- (BOOL)processData:(id)arg1 inflateResult:(int )arg2 CRC:(unsigned int )arg3 isDone:(BOOL)arg4 handler:(id /* CDUnknownBlockType */)arg5;
- (void)readWithHandler:(id /* CDUnknownBlockType */)arg1;
- (void)prepareBuffer;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 uncompressedSize:(NSUInteger)arg2 CRC:(unsigned int)arg3 validateCRC:(BOOL)arg4;

@end

