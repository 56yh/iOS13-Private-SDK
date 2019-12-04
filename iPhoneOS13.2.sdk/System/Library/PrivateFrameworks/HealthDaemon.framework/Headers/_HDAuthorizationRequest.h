//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSUUID;

@interface _HDAuthorizationRequest : NSObject
{
    id /* block */ _completionHandler;
    NSUUID *_identifier;
    NSSet *_typesToWrite;
    NSSet *_typesToRead;
}

@property(readonly, copy, nonatomic) NSSet *typesToRead; // @synthesize typesToRead=_typesToRead;
@property(readonly, copy, nonatomic) NSSet *typesToWrite; // @synthesize typesToWrite=_typesToWrite;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)invokeCompletionHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithIdentifier:(id)arg1 typesToWrite:(id)arg2 typesToRead:(id)arg3 completionHandler:(id /* block */)arg4;

@end

