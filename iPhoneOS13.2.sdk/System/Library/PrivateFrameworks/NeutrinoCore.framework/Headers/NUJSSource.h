//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSSourceExport-Protocol.h>

@class NSString, NUSource;

@interface NUJSSource : NUJSProxy <NUJSSourceExport>
{
}

@property(readonly) NSString *mediaType;
- (id)toString;
@property(readonly, nonatomic) NUSource *source;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithSource:(id)arg1 context:(id)arg2;

@end

