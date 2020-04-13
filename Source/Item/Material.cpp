#include "Material.h"

const Material Material::NOTHING(ID::Nothing, 0, false, "None");
const Material Material::GRASS_BLOCK(ID::Grass, 99, true, "Grass Block");
const Material Material::DIRT_BLOCK(ID::Dirt, 99, true, "Dirt Block");
const Material Material::STONE_BLOCK(ID::Stone, 99, true, "Stone Block");
const Material Material::OAK_BARK_BLOCK(ID::OakBark, 99, true,
                                        "Oak Bark Block");
const Material Material::OAK_LEAF_BLOCK(ID::OakLeaf, 99, true,
                                        "Oak Leaf Block");
const Material Material::SAND_BLOCK(ID::Sand, 99, true, "Sand Block");
const Material Material::CACTUS_BLOCK(ID::Cactus, 99, true, "Cactus Block");

const Material Material::ROSE(ID::Rose, 99, true, "Rose");
const Material Material::TALL_GRASS(ID::TallGrass, 99, true, "Tall Grass");
const Material Material::DEAD_SHRUB(ID::DeadShrub, 99, true, "Dead Shrub");

Material::Material(Material::ID id, int maxStack, bool isBlock,
                   std::string &&name)
    : id(id)
    , maxStackSize(maxStack)
    , isBlock(isBlock)
    , name(std::move(name))
{
}

BlockId Material::toBlockID() const
{
    switch (id) {
        case Nothing:
            return BlockId::Air;

        case Grass:
            return BlockId::Grass;

        case Dirt:
            return BlockId::Dirt;

        case Stone:
            return BlockId::Stone;

        case OakBark:
            return BlockId::OakBark;

        case OakLeaf:
            return BlockId::OakLeaf;

        case Sand:
            return BlockId::Sand;

        case Cactus:
            return BlockId::Cactus;

        case TallGrass:
            return BlockId::TallGrass;

        case Rose:
            return BlockId::Rose;

        case DeadShrub:
            return BlockId::DeadShrub;

        default:
            return BlockId::NUM_TYPES;
    }
}

const Material &Material::toMaterial(BlockId id)
{
    switch (id) {
        case BlockId::Grass:
            return GRASS_BLOCK;
            break;

        case BlockId::Dirt:
            return DIRT_BLOCK;
            break;

        case BlockId::Stone:
            return STONE_BLOCK;
            break;

        case BlockId::OakBark:
            return OAK_BARK_BLOCK;
            break;

        case BlockId::OakLeaf:
            return OAK_LEAF_BLOCK;
            break;

        case BlockId::Sand:
            return SAND_BLOCK;
            break;

        case BlockId::Cactus:
            return CACTUS_BLOCK;
            break;

        case BlockId::Rose:
            return ROSE;
            break;

        case BlockId::TallGrass:
            return TALL_GRASS;
            break;

        case BlockId::DeadShrub:
            return DEAD_SHRUB;
            break;

        case BlockId::CactusRoot:
            return CACTUS_BLOCK;
            break;

        default:
            return NOTHING;
            break;
    }
}
