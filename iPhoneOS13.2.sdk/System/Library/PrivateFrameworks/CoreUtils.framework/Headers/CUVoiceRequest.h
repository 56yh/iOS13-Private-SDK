//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VSSpeechRequest;

__attribute__((visibility("hidden")))
@interface CUVoiceRequest : NSObject
{
    unsigned int _flags;
    id /* block */ _completion;
    id _owner;
    VSSpeechRequest *_speechRequest;
}

@property(retain, nonatomic) VSSpeechRequest *speechRequest; // @synthesize speechRequest=_speechRequest;
@property(retain, nonatomic) id owner; // @synthesize owner=_owner;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) id /* block */ completion; // @synthesize completion=_completion;

@end

