// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #ifndef RECMASHAREDPOINTERPOLYLINE_H
        #define RECMASHAREDPOINTERPOLYLINE_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RPolyline.h"
            
            typedef QSharedPointer<RPolyline> RPolylinePointer;
        

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaSharedPointerPolyline {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRShape(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRExplodable(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;
        // properties of secondary base class RExplodable:
        

        // methods of secondary base class RExplodable:
        

    // properties:
    

    // public methods:
    static  QScriptValue
        getShapeType
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clone
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isDirected
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        to2D
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDoubleProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoolProperties
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        clear
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        normalize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        prependShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendShapeAuto
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        appendVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        prependVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        insertVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        insertVertexAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeFirstVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeLastVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeVerticesAfter
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeVerticesBefore
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isEmpty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVertexAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertexAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertexIndex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBulges
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBulges
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBulgeAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setBulgeAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasArcSegments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertexAngles
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVertexAngle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setGlobalWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartWidthAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartWidthAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndWidthAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndWidthAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setStartWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setEndWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isGeometricallyClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        autoClose
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toLogicallyClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toLogicallyOpen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSelfIntersectionPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOrientation
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        contains
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        containsShape
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointInside
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        moveEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDirection2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSideOfPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getBoundingBox
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getArea
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceFromStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistancesFromStart
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLengthTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSegmentsLength
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getEndPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getMiddlePoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCenterPoints
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getPointsWithDistanceToEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getAngleAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getVectorTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDistanceTo
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getClosestVertex
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        move
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        rotate
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        scale
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        mirror
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        reverse
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stretch
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTransformed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getTrimEnd
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        trimEndPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExploded
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getOutline
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isInterpolated
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        countSegments
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSegmentAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isArcSegmentAt
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getLastSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getFirstSegment
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isStraight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        toPainterPath
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        simplify
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        verifyTangency
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        stripWidths
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setMinimumWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSegmentAtDist
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        relocateStartPoint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        convertToClosed
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        convertToOpen
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        modifyPolylineCorner
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getConvexVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getConcaveVertices
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        splitAtDiscontinuities
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        hasProxy
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue copy
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RPolyline* getSelf(const QString& fName, QScriptContext* context)
    ;static RPolyline* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  QScriptValue data
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue isNull
    (QScriptContext *context, QScriptEngine *engine)
    ;};
    #endif
    