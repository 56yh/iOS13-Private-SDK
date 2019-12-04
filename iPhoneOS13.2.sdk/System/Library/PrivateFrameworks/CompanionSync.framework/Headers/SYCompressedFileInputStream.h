//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>


#import <CompanionSync/SYStreamEventHandlerBlocks-Protocol.h>
#import <CompanionSync/SYStreamProgress-Protocol.h>
#import <CompanionSync/SYStreamThroughputCounter-Protocol.h>
#import <CompanionSync/_SYStreamRunLoopSourceHandler-Protocol.h>

@class NSProgress, NSString, NSURL, _SYStreamGuts;

@interface SYCompressedFileInputStream : NSInputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress>
{
    NSURL *_url;
    struct gzFile_s *_file;
    _SYStreamGuts *_internal;
    id /* block */ _onOpenComplete;
    id /* block */ _onBytesAvailable;
    id /* block */ _onSpaceAvailable;
    id /* block */ _onEndOfFile;
    id /* block */ _onError;
    id /* block */ _onClose;
    NSProgress *_progress;
    unsigned long long _byteCount;
}

@property(readonly, nonatomic) unsigned long long bytesThroughput; // @synthesize bytesThroughput=_byteCount;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) id /* block */ onClose; // @synthesize onClose=_onClose;
@property(copy, nonatomic) id /* block */ onError; // @synthesize onError=_onError;
@property(copy, nonatomic) id /* block */ onEndOfFile; // @synthesize onEndOfFile=_onEndOfFile;
@property(copy, nonatomic) id /* block */ onSpaceAvailable; // @synthesize onSpaceAvailable=_onSpaceAvailable;
@property(copy, nonatomic) id /* block */ onBytesAvailable; // @synthesize onBytesAvailable=_onBytesAvailable;
@property(copy, nonatomic) id /* block */ onOpenComplete; // @synthesize onOpenComplete=_onOpenComplete;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (void)_postEventToDelegate:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_SY_notifyOnQueue:(id)arg1 handler:(id /* block */)arg2;
- (unsigned long long)streamStatus;
- (id)streamError;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithCompressedFileAtURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

