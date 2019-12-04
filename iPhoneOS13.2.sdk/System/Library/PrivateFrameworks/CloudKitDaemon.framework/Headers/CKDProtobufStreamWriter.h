//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSData, NSFileHandle, NSInputStream, NSMutableArray, NSOutputStream, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDProtobufStreamWriter : NSObject <NSStreamDelegate>
{
    NSMutableArray *_allObjects;
    NSData *_curData;
    unsigned long long _curDataPos;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    struct z_stream_s _zlibStream;
    _Bool _haveFlushedZlib;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _shouldCompress;
    _Bool _hasInitedCompression;
    _Bool _haveFinishedCompression;
    _Bool _haveFinishedStreaming;
    unsigned long long _bufferSize;
    id /* block */ _logRequestObjectBlock;
    NSFileHandle *_binaryLogFileHandle;
}

@property _Bool haveFinishedStreaming; // @synthesize haveFinishedStreaming=_haveFinishedStreaming;
@property(nonatomic) _Bool haveFinishedCompression; // @synthesize haveFinishedCompression=_haveFinishedCompression;
@property(nonatomic) _Bool hasInitedCompression; // @synthesize hasInitedCompression=_hasInitedCompression;
@property(retain, nonatomic) NSFileHandle *binaryLogFileHandle; // @synthesize binaryLogFileHandle=_binaryLogFileHandle;
@property(copy, nonatomic) id /* block */ logRequestObjectBlock; // @synthesize logRequestObjectBlock=_logRequestObjectBlock;
@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) _Bool shouldCompress; // @synthesize shouldCompress=_shouldCompress;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (long long)_streamNextObject:(id)arg1;
- (void)_prepareObjectForStreaming:(id)arg1;
- (id)_dataForMessage:(id)arg1;
- (long long)_writeDataToStream:(id)arg1;
- (_Bool)_finishStreaming:(id)arg1;
- (id)_compressBodyData:(id)arg1 shouldFlush:(_Bool)arg2;
- (id)open;
- (void)setStreamedObjects:(id)arg1;
- (void)tearDown;
- (void)dealloc;
- (void)_tearDownOutputStream;
- (id)initWithCompression:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

