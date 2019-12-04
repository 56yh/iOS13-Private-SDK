//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSArray, NSMutableArray, PKPhysicsWorld;
@protocol NSObject;

@interface PKPhysicsBody : NSObject <NSCopying, NSSecureCoding>
{
    id  _representedObject;
    struct b2BodyDef _bodyDef;
    struct b2Body *_body;
    struct PKCField *_field;
    int _dynamicType;
    vector_8416aa54 _shapes;
    PKPhysicsWorld *_world;
    NSMutableArray *_joints;
    _Bool _inUse;
    int _shapeType;
    shared_ptr_2aaf3a07 _pathPtr;
    shared_ptr_639e7c03 _quadTree;
    struct CGPoint _p0;
    struct CGPoint _p1;
    struct CGSize _size;
    double _radius;
    double _edgeRadius;
    struct CGImage *_mask;
    shared_ptr_2aaf3a07 _outline;
    _Bool _isPinned;
    _Bool _allowsRotation;
    id /* block */ _postStepBlock;
}

+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 edgeRadius:(double)arg3;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 edgeRadius:(double)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithBodies:(id)arg1;
+ (id)initWithMarchingCubes:(struct PKCGrid *)arg1 pixelFrame:(struct CGRect)arg2;
+ (id)initWithQuadTree:(id)arg1;
+ (id)bodyWithOutline:(shared_ptr_2aaf3a07)arg1 offset:(struct CGPoint)arg2;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) id /* block */ postStepBlock; // @synthesize postStepBlock=_postStepBlock;
- (id).cxx_construct;
- (id)allContactedBodies;
- (id)description;
- (id)_descriptionFormat;
- (id)_descriptionClassName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
@property(nonatomic, getter=isDynamic) _Bool dynamic;
@property(nonatomic) double charge;
@property(nonatomic) double friction;
@property(nonatomic) double restitution;
@property(nonatomic) double radius;
- (void)reapplyScale:(double)arg1 yScale:(double)arg2;
@property(readonly, nonatomic) double area;
@property(nonatomic) double density;
@property(nonatomic) double mass;
@property(readonly, nonatomic) NSArray *joints;
@property(nonatomic, getter=isResting) _Bool resting;
@property(nonatomic) _Bool allowsRotation;
@property(nonatomic) double angularVelocity;
@property(nonatomic) struct CGVector velocity;
@property(nonatomic) unsigned int contactTestBitMask;
@property(nonatomic) unsigned int collisionBitMask;
@property(nonatomic) unsigned int fieldBitMask;
@property(nonatomic) unsigned int categoryBitMask;
@property(nonatomic) _Bool affectedByGravity;
@property(nonatomic) _Bool usesPreciseCollisionDetection;
- (void)applyUnscaledImpulse:(struct CGVector)arg1;
- (void)applyUnscaledImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyUnscaledForce:(struct CGVector)arg1;
- (void)applyUnscaledForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyAngularImpulse:(double)arg1;
- (void)applyImpulse:(struct CGVector)arg1;
- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyTorque:(double)arg1;
- (void)applyForce:(struct CGPoint)arg1;
- (void)applyForce:(struct CGPoint)arg1 atPoint:(struct CGPoint)arg2;
@property(nonatomic) double angularDamping;
@property(nonatomic) double linearDamping;
@property(nonatomic) double rotation;
- (_Bool)_allowSleep;
- (void)set_allowSleep:(_Bool)arg1;
@property(nonatomic) struct CGPoint position;
@property(nonatomic) _Bool pinned;
@property(nonatomic) __weak id  representedObject;
- (id)initWithEdgeLoopFromPath:(struct CGPath *)arg1;
- (id)initWithEdgeChainFromPath:(struct CGPath *)arg1;
- (id)initWithPolygonFromPath:(struct CGPath *)arg1;
- (id)initWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)initWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 edgeRadius:(float)arg3;
- (id)initWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
- (id)initWithRectangleOfSize:(struct CGSize)arg1;
- (id)initWithCircleOfRadius:(double)arg1 center:(struct CGPoint)arg2;
- (id)initWithCircleOfRadius:(double)arg1;
- (id)initWithBodies:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)isEqualToBody:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)clearBox2DData;
@property(readonly, nonatomic) struct PKPath *volume;
@property(nonatomic) shared_ptr_2aaf3a07 outline;
@property(nonatomic) struct b2Body *_body;
@property(nonatomic) struct b2BodyDef _bodyDef;
- (void)set_inUse:(_Bool)arg1;
- (_Bool)_inUse;
- (void)set_joints:(id)arg1;
- (id)_joints;
- (shared_ptr_639e7c03)_quadTree;
- (id)_world;
- (void)set_world:(id)arg1;
- (void)setActive:(_Bool)arg1;
- (_Bool)active;
@property(readonly, nonatomic) vector_8416aa54 *_shapes;

@end

