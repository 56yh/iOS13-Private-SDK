//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioToolboxCore/AUAudioUnitBus.h>



@class AUAudioUnit_XH, AVAudioFormat, NSArray, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding>
{
    AUAudioUnit_XH *_audioUnit;
    NSXPCConnection *_remoteAUXPCConnection;
    unsigned int _scope;
    unsigned int _element;
    AVAudioFormat *_format;
    NSArray *_supportedChannelLayoutTags;
    _Bool _removingObserverWithContext;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (id)format;
- (void)propertyChanged:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

