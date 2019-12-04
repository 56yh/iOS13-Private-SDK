//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPComponentWriteChannel-Protocol.h>

@class NSString, NSURL, TSUFileIOChannel;

__attribute__((visibility("hidden")))
@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSURL *_URL;
    id /* block */ _handler;
    TSUFileIOChannel *_writeChannel;
    _Bool _isClosed;
}

- (void)close;
- (void)writeData:(id)arg1;
- (id)initWithURL:(id)arg1 handler:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

