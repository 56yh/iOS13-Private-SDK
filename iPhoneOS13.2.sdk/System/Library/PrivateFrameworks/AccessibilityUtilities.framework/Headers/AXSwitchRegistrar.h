//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMIDIManager, AXSwitch;
@protocol AXSwitchRegistrarDelegate;

@interface AXSwitchRegistrar : NSObject
{
    _Bool _addLongPressSwitch;
    id <AXSwitchRegistrarDelegate> _delegate;
    AXSwitch *_aSwitch;
    struct __IOHIDDevice *_device;
    struct __IOHIDEventSystemClient *_eventSystemClient;
    struct __IOHIDManager *_manager;
    AXMIDIManager *_midiManager;
}

@property(retain, nonatomic) AXMIDIManager *midiManager; // @synthesize midiManager=_midiManager;
@property(retain, nonatomic) struct __IOHIDManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) struct __IOHIDEventSystemClient *eventSystemClient; // @synthesize eventSystemClient=_eventSystemClient;
@property(retain, nonatomic) struct __IOHIDDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) AXSwitch *aSwitch; // @synthesize aSwitch=_aSwitch;
@property(nonatomic) _Bool addLongPressSwitch; // @synthesize addLongPressSwitch=_addLongPressSwitch;
@property(nonatomic) __weak id <AXSwitchRegistrarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_filterEvents:(_Bool)arg1;
- (id)_mfiMatching;
- (id)_atvRemoteMatching;
- (id)_keyboardMatching;
- (void)_handleMFIButtonDownValue:(struct __IOHIDValue *)arg1;
- (void)_handleATVRemoteButtonDownEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleMIDIEvent:(id)arg1 device:(id)arg2 entity:(id)arg3 source:(id)arg4;
- (void)_handleKeyboardKeyDownEvent:(struct __IOHIDEvent *)arg1;
- (void)_handleApplicationWillResignActive:(id)arg1;
- (void)_handleApplicationDidBecomeActive:(id)arg1;
- (_Bool)_isSwitchWithSource:(struct NSString *)arg1 keyCode:(unsigned short)arg2 buttonNumber:(unsigned int)arg3 ATVRemoteButtonUsage:(long long)arg4 midiEvent:(id)arg5;
- (_Bool)_isMIDISwitchWithMidiEvent:(id)arg1;
- (_Bool)_isATVRemoteButtonSwitchWithUsage:(long long)arg1 longPress:(_Bool)arg2;
- (_Bool)_isMFISwitchWithButtonNumber:(unsigned int)arg1 longPress:(_Bool)arg2;
- (_Bool)_isKeyboardSwitchWithKeyCode:(unsigned short)arg1 longPress:(_Bool)arg2;
- (id)firstAvailableName;
- (_Bool)isSwitchWithName:(id)arg1;
- (void)endFilteringEvents;
- (void)beginFilteringEvents;
- (void)dealloc;
- (id)init;

@end

