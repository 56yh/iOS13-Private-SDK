//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MIME/MFDataConsumer-Protocol.h>

@class NSString;

@interface MFBlockDataConsumer : NSObject <MFDataConsumer>
{
    id /* block */ _appendHandler;
    id /* block */ _doneHandler;
}

- (void)done;
- (long long)appendData:(id)arg1;
- (id)initWithAppendHandler:(id /* block */)arg1 doneHandler:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

